# Question 2

Twitter is a micro blogging platform where users post “tweets” which are ristricted to 140
characters. In this question we want you to build twitter as a platform. Below are the
functionalities of twitter that we want to build out
- A user should be able to sign up / login
- Users should be able to follow each other
- User should be able to tweet about anything they like
- When a user comes on their homepage, they should see all the tweets of people they
are following sorted by latest tweet on top

Below are the details we would like to know

1. What technologies would you use to build out this platform? Please tell us the
languages, databases, tools / servers you would use to build out the above platform.
2. Write the schema of your database that is going to store the data. We want to see this in
detail to see where the all the different information will be stored
3. Write a function/API that will return all the tweets to show on the dashboard of a
particular user. Please make sure to return the data in json.
4. How much can the system you have built scale up to? What are the limiting factors of
your system and when will it start failing?
5. BONUS: write the frontend code for the textbox where you can type your tweet and the
submit button that will send the request to publish this tweet.

# Technology Stack
- Database - Mongo DB
- FrontEnd - ReactJS
- API - Node - ExpressJS

# How to Run the Application
1. Install Dependencies `npm install`
2. Run Mongo DB Server `mongod --config /usr/local/etc/mongod.conf`
3. Restore/Import using the dump folder `mongorestore -d <database_name> <directory_backup>`
4. Run API Server `node api/index.js`
5. Run Frontend `npm start`

Go to `http://localhost:3000/` and enjoy using the application