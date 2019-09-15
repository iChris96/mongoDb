//using mongoRepo as origin for GIT
//git config user.email -> christopher_x10x@hotmail.com

//js
x = 300
x + 50 //350
new Date() //ISODate("2019-09-14T21:47:21.856Z")
function suma(x,y) { return x + y }
suma //prints suma function
suma(50,30)

//mongo commands
db //show current database /// test by default
show dbs //show local databases
use traindb //creat a new db and switch to them
show collections //show db inner collections

help //global help
db.help() //help on db methods
db.mycoll.help() //help on collection methods

db.dropDatabase() //delete current database ///verify with -> db
db.createCollection("usersCollection") //create new collection
db.usersCollection.drop() //delete collection

db.train //call collection
db.train.count() //documents count()
db.train.find() //show all documents
db.train.find().pretty() //show all documents in pretty mode
db.train.insert({name:"somebody",age:26}) //insert document to collection

//insert some list of documents
db.coll1.insert([
    {
        "name": "juan",
        "age": 25,
        "merried" : true
    },
    {
        "name": "hector",
        "age": 19,
        "merried" : true
    },
    {
        "name": "jimmy",
        "age": 19,
        "merried" : false
    }
])
//find documents where..
db.coll1.find({age: 19})
db.coll1.find({name:"juan"}).pretty()




DB -> Collection -> Document
SchoolDb -> Alumnos -> {alumno1,alumno2,alumno3...}.json
TrainDb -> train -> {reg1,reg2,reg3...}.json



