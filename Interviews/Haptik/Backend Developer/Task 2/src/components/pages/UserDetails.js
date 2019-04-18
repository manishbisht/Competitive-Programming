import React, {Component} from 'react';
import Cookies from 'universal-cookie';
import Typography from '@material-ui/core/Typography';
import Card from '@material-ui/core/Card';
import CardActions from '@material-ui/core/CardActions';
import CardContent from '@material-ui/core/CardContent';
import Button from '@material-ui/core/Button';
import config from '../../config.js'

const cookies = new Cookies();

class UserDetails extends Component {
    constructor(props) {
        super(props);
        this.state = {
            user: {},
            followers: [],
        }
    }

    componentWillMount() {
        let userId = cookies.get('userId');
        if (userId) {
            this.userDetails();
            this.getAllFollowers();
        } else {
            this.props.history.push('/');
        }
    }

    userDetails() {
        const { userId } = this.props.match.params;
        let url = config.serverUrl + 'user/' + userId;
        fetch(url, {
            method: "GET",
            mode: "cors",
        }).then((response) => {
            response.json().then((result) => {
                if(response.status === 400) {
                    alert(JSON.stringify(result));
                } else {
                    this.setState({
                        user: result[0],
                    });
                }
            });
        });
    }

    getAllFollowers() {
        let userId = cookies.get('userId');
        let url = config.serverUrl + 'follower/' + userId;
        fetch(url, {
            method: "GET",
            mode: "cors",
        }).then((response) => {
            response.json().then((result) => {
                if(response.status === 400) {
                    alert(JSON.stringify(result));
                } else {
                    this.setState({
                        followers: result,
                    });
                }
            });
        });
    }

    followUser() {
        const { userId } = this.props.match.params;
        let cookieUserId = cookies.get('userId');
        let url = config.serverUrl + 'follower/' + userId;
        let followerData = {
            FOLLOWED_BY: cookieUserId,
            FOLLOWED_TO: userId,
        };
        fetch(url, {
            method: "POST",
            mode: "cors",
            headers: {
                "Content-Type": "application/json",
            },
            body: JSON.stringify(followerData),
        }).then((response) => {
            response.json().then((result) => {
                if(response.status === 400) {
                    alert(JSON.stringify(result));
                } else {
                    this.userDetails();
                    this.getAllFollowers();
                }
            });
        });
    }

    unFollowUser() {
        const { userId } = this.props.match.params;
        let cookieUserId = cookies.get('userId');
        let url = config.serverUrl + 'follower/' + userId;
        let followerData = {
            FOLLOWED_BY: cookieUserId,
            FOLLOWED_TO: userId,
        };
        fetch(url, {
            method: "DELETE",
            mode: "cors",
            headers: {
                "Content-Type": "application/json",
            },
            body: JSON.stringify(followerData),
        }).then((response) => {
            response.json().then((result) => {
                if(response.status === 400) {
                    alert(JSON.stringify(result));
                } else {
                    this.userDetails();
                    this.getAllFollowers();
                }
            });
        });
    }

    renderCardActionButtons() {
        const { userId } = this.props.match.params;
        let cookieUserId = cookies.get('userId');

        if(userId !== cookieUserId) {
            let isFollower = false;
            this.state.followers.forEach((follower) => {
                if (follower["FOLLOWED_BY"] === cookieUserId && follower["FOLLOWED_TO"] === userId) {
                    isFollower = true;
                }
            });

            if(isFollower) {
                return (
                    <CardActions>
                        <Button size="small" color="primary" onClick={() => this.unFollowUser()}>Un Follow</Button>
                    </CardActions>
                );
            }

            return (
                <CardActions>
                    <Button size="small" color="primary" onClick={() => this.followUser()}>Follow</Button>
                </CardActions>
            );
        }
    }

    render() {
        return (
            <div style={{marginTop: 100, padding: "10px 20px"}}>
                <Card>
                    <CardContent>
                        <Typography variant="h5" component="h2">Email: {this.state.user["EMAIL"]}</Typography>
                        <Typography variant="h5" component="h2">First Name: {this.state.user["FIRST_NAME"]}</Typography>
                        <Typography variant="h5" component="h2">Last Name: {this.state.user["LAST_NAME"]}</Typography>
                        <Typography variant="h5" component="h2">User ID: {this.state.user["_id"]}</Typography>
                    </CardContent>
                    {this.renderCardActionButtons()}
                </Card>
            </div>
        );
    }
}

export default UserDetails;