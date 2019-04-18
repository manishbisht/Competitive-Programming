import React, {Component} from 'react';
import Cookies from 'universal-cookie';
import Typography from '@material-ui/core/Typography';
import TextField from '@material-ui/core/TextField';
import Button from '@material-ui/core/Button';
import config from '../../config.js'
const cookies = new Cookies();

class NewPost extends Component {
    constructor(props) {
        super(props);
        this.state = {
            post: {
                CONTENT: "",
                AUTHOR: "",
            }
        }
    }

    componentWillMount() {
        let userId = cookies.get('userId');
        if(userId) {
            let post = this.state.post;
            post["AUTHOR"] = userId;
            this.setState({
                post,
            })
        } else {
            this.props.history.push('/');
        }
    }

    createAccount() {
        let post = this.state.post;
        let url = config.serverUrl + 'post';
        fetch(url, {
            method: "POST",
            mode: "cors",
            headers: {
                "Content-Type": "application/json",
            },
            body: JSON.stringify(post),
        }).then((response) => {
            response.json().then((result) => {
                if(response.status === 400) {
                    alert(JSON.stringify(result));
                } else {
                    this.props.history.push('/welcome')
                }
            });
        });
    }

    handleChange(e, key, type) {
        let value = e.target.value;
        switch (type) {
            case "POST":
                let post = this.state.post;
                post[key] = value;
                this.setState({
                    post,
                });
        }
    }

    render() {
        return (
            <div style={{marginTop: 100}}>
                <center>
                    <Typography variant="h3" gutterBottom>
                        Create a new post
                    </Typography>
                    <div style={{maxWidth: 400}}>
                        <TextField fullWidth={true}
                                   multiline
                                   maxLength="140"
                                   label="What's in your mind"
                                   value={this.state.post['CONTENT']}
                                   onChange={(e) => this.handleChange(e, "CONTENT", "POST")}/>
                        <br /><br />
                        <Button variant="contained" color="primary" style={{margin: 5}} onClick={() => this.createAccount()}>
                            Create Post
                        </Button>
                    </div>
                </center>
            </div>
        );
    }
}

export default NewPost;