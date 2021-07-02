import React, {Component} from 'react';
import Typography from '@material-ui/core/Typography';
import Button from '@material-ui/core/Button';

class Index extends Component {
    render() {
        return (
            <div style={{marginTop: 100}}>
                <center>
                    <Typography variant="h3" gutterBottom>
                        Welcome to Twitter
                    </Typography>
                    <Typography variant="h4" gutterBottom>
                        Please sign up / login to continue
                    </Typography>
                    <div>
                        <Button variant="contained" color="primary" style={{margin: 5}} onClick={() => this.props.history.push('/signup')}>
                            Sign Up
                        </Button>
                        <Button variant="contained" color="primary" style={{margin: 5}} onClick={() => this.props.history.push('/login')}>
                            Login
                        </Button>
                    </div>
                </center>
            </div>
        );
    }
}

export default Index;