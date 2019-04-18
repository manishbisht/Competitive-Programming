import React, {Component} from 'react';
import { Link } from "react-router-dom";
import Cookies from 'universal-cookie';
import Typography from '@material-ui/core/Typography';
import Card from '@material-ui/core/Card';
import CardContent from '@material-ui/core/CardContent';
import config from '../../config.js'

const cookies = new Cookies();

class UserHome extends Component {
    constructor(props) {
        super(props);
        this.state = {
            posts: [],
        }
    }

    componentWillMount() {
        let userId = cookies.get('userId');
        if (userId) {
            this.getAllPosts();
        } else {
            this.props.history.push('/');
        }
    }

    getAllPosts() {
        let userId = cookies.get('userId');
        let url = config.serverUrl + 'posts/' + userId;
        fetch(url, {
            method: "GET",
            mode: "cors",
        }).then((response) => {
            response.json().then((result) => {
                if(response.status === 400) {
                    alert(JSON.stringify(result));
                } else {
                    this.setState({
                        posts: result,
                    });
                }
            });
        });
    }

    renderPosts() {
        let posts = this.state.posts;
        return posts.map((post) => {
            return (
                <div style={{padding: "10px 20px"}}>
                    <Card>
                        <CardContent>
                            <Typography variant="h5" component="h2">{post["CONTENT"]}</Typography>
                            <Typography color="textSecondary">Last Updated at {post["updatedAt"]}</Typography>
                            <Typography component="p">
                                Created By: <Link to={`/userDetails/${post["AUTHOR"]}`}>{post["AUTHOR"]}</Link>
                            </Typography>
                        </CardContent>
                    </Card>
                </div>
            );
        });
    }

    render() {
        return (
            <div style={{marginTop: 100}}>
                <center>
                    {this.renderPosts()}
                </center>
            </div>
        );
    }
}

export default UserHome;