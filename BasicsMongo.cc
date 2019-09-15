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
        "merried" : true,
        "friends": ["jimmy","hector","kevin"]
    },
    {
        "name": "hector",
        "age": 19,
        "merried" : true,
        "friends": ["jimmy","cesar","kevin"]
    },
    {
        "name": "jimmy",
        "age": 19,
        "merried" : false,
        "friends": ["juan","hector","pedro"]
    }
])
//find documents where..
db.coll1.find({age: 19}) //int
db.coll1.find({name:"juan"}).pretty() //string
db.coll1.find({friends:"pedro"}) //list of strings
db.collx.findOne() //first result only
db.collx.find().limit(2) //get only 2 results
db.coll1.find({age: 19}, {name: 1, age: 1}).pretty() //show only selected values (1->show, 0->hide)
db.coll1.find({age: 19}, {name: 1, age: 1, _id: 0}).pretty() //hide _id property
db.coll1.find().sort({name:1}) //sort by property
db.coll1.find({age : {$gt: 20}}) //greater than
db.coll1.find( { $or: [ { name: "hector" }, { name: "jimmy" } ] } ).pretty() //$or logic
db.coll1.find ( { age: { $in: [20, 50] } } ).pretty() //$in logic
db.coll1.count() //count of documents
db.coll1.find().count() //count of returned documents
db.coll1.find().forEach(x => print("Nombre: " + x.name)) //using js to print objects
db.coll1.find({"name: jimmy"}).update({
    "name: jimmy","age": 50,
    "favoriteColor" : "blue",
    "merried" : false,
    "friends": ["juan","hector","pedro"]}) //modify manually every property
db.coll1.update({name: "jimmy"}, {$set: {favoriteColor : "blue"}}) //set new property or update property
db.coll1.update({name: "carlos"}, {$set: {favoriteColor: "yellow", age: 20, "merried": false}}, {upsert: true}) //insert if not exist
db.coll1.update({name: "jimmy"}, {$inc: {age : 2}}) //increment property value
db.coll1.update({name: "jimmy"}, {$rename: {"name" : "fullname"}}) //rename property
db.coll1.update($or: [ { name: "hector" }, { name: "jimmy" } ], {$rename: {"name" : "fullname"}}) //rename property

db.coll1.remove({name:"carlos"}) //remove documents where name is carlos
db.coll1.remove({}) //remove all documents




DB -> Collection -> Document
SchoolDb -> Alumnos -> {alumno1,alumno2,alumno3...}.json
TrainDb -> train -> {reg1,reg2,reg3...}.json



