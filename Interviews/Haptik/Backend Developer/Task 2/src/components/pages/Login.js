import React, {Component} from 'react';
import Cookies from 'universal-cookie';
import Typography from '@material-ui/core/Typography';
import TextField from '@material-ui/core/TextField';
import Button from '@material-ui/core/Button';
import config from '../../config.js'
const cookies = new Cookies();

class Login extends Component {
    constructor(props) {
        super(props);
        this.state = {
            user: {
                EMAIL: '',
                PASSWORD: '',
            }
        }
    }

    componentWillMount() {
        let userId = cookies.get('userId');
        if(userId) {
            this.props.history.push('/welcome');
        }
    }

    checkLogin() {
        let user = this.state.user;
        let url = config.serverUrl + 'login';
        fetch(url, {
            method: "POST",
            mode: "cors",
            headers: {
                "Content-Type": "application/json",
            },
            body: JSON.stringify(user),
        }).then((response) => {
            response.json().then((result) => {
                if(response.status === 400) {
                    alert(JSON.stringify(result));
                } else {
                    cookies.set("userId", result[0]["_id"]);
                    this.props.history.push('/welcome');
                }
            });
        });
    }

    handleChange(e, key, type) {
        let value = e.target.value;
        switch (type) {
            case "USER":
                let user = this.state.user;
                user[key] = value;
                this.setState({
                    user,
                });
        }
    }

    render() {
        return (
            <div style={{marginTop: 100}}>
                <center>
                    <Typography variant="h3" gutterBottom>
                        Login into your Account
                    </Typography>
                    <div style={{maxWidth: 400}}>
                        <TextField fullWidth={true}
                                   label="Email"
                                   value={this.state.user['EMAIL']}
                                   onChange={(e) => this.handleChange(e, "EMAIL", "USER")}/>
                        <br /><br />
                        <TextField fullWidth={true}
                                   type="password"
                                   label="Password"
                                   value={this.state.user['PASSWORD']}
                                   onChange={(e) => this.handleChange(e, "PASSWORD", "USER")}/>
                        <br /><br />
                        <Button variant="contained" color="primary" style={{margin: 5}} onClick={() => this.checkLogin()}>
                            Login
                        </Button>
                    </div>
                </center>
            </div>
        );
    }
}

export default Login;