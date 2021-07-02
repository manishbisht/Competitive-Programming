import React, {Component} from 'react';
import {BrowserRouter as Router, Route, withRouter} from "react-router-dom";
import Header from '../common/Header';
import Index from '../components/pages/Index';
import SignUp from '../components/pages/SignUp';
import Login from '../components/pages/Login';
import UserHome from '../components/pages/UserHome';
import NewPost from '../components/pages/NewPost';
import UserDetails from '../components/pages/UserDetails';
import './App.css';

const HeaderWithRouter = withRouter(Header);

class App extends Component {
    render() {
        return (
            <Router>
                <div>
                    <HeaderWithRouter />
                    <Route path="/" exact component={Index}/>
                    <Route path="/signup" component={SignUp}/>
                    <Route path="/login" component={Login}/>
                    <Route path="/welcome" component={UserHome}/>
                    <Route path="/newPost" component={NewPost}/>
                    <Route path="/userDetails/:userId" component={UserDetails}/>
                </div>
            </Router>
        );
    }
}

export default App;
