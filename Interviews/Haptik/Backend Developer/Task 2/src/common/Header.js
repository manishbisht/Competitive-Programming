import React, {Component} from 'react';
import Cookies from 'universal-cookie';
import AppBar from '@material-ui/core/AppBar';
import Toolbar from '@material-ui/core/Toolbar';
import Typography from '@material-ui/core/Typography';
import IconButton from '@material-ui/core/IconButton';
import Icon from '@material-ui/core/Icon/Icon';
import Button from '@material-ui/core/Button';
const cookies = new Cookies();

class Header extends Component {
    logout() {
        cookies.set("userId", "");
        this.props.history.push('/');
    }

    renderActionButtons() {
        let userId = cookies.get('userId');
        if(userId) {
            return (
                <div>
                    <Button color="inherit" onClick={() => this.props.history.push('/newPost')}>New Post</Button>
                    <Button color="inherit" onClick={() => this.logout()}>Logout</Button>
                </div>
            );
        }
        return (
            <div>
                <Button color="inherit" onClick={() => this.props.history.push('/login')}>Login</Button>
                <Button color="inherit" onClick={() => this.props.history.push('/signup')}>Signup</Button>
            </div>
        );
    }

    render() {
        return (
            <AppBar position="fixed">
                <Toolbar>
                    <IconButton color="inherit" aria-label="Menu">
                        <Icon>menu</Icon>
                    </IconButton>
                    <Typography variant="title" color="inherit">
                        Twitter
                    </Typography>
                    <div style={{flexGrow: 1}}></div>
                    {this.renderActionButtons()}
                </Toolbar>
            </AppBar>
        );
    }
}

export default Header;