
import List from "./List.jsx";
function App(){
const fruits = [{id:1,name:"apple", calories: 95},
{id: 2,name:"banana", calories: 45},
{id: 3,name:"coconut", calories: 50},
{id: 4,name:"pineapple", calories: 160}];

const vegetables = [{id:1,name:"brinjil", calories: 15},
{id: 2,name:"potatoes", calories: 87},
{id: 3,name:"carrots", calories: 9},
{id: 4,name:"cucumber", calories: 60},
{id: 5,name:"corn", calories: 11}];


  return(
    <>
   {fruits.length > 0 &&  <List items={vegetables} category="Vegetables"/> } 
   {vegetables.length > 0 ? <List items={fruits} category="Fruits"/> : null} 
{/* <UserGreeting isLoggedIn={true} username="Jay"/> */}
{/* <Student name ="Spongebob" age={30} isStudent={false}/>
<Student name="Jay" age={20} isStudent={true}></Student>
<Student name="Rahul" age={21} isStudent= {false}></Student>
<Student name ="Larry"></Student> */}
    {/* <Button></Button> */}
    {/* <Card></Card>
    <Card></Card>
    <Card></Card> */}
    </>
  );
}


export default App


//How to style react components with css
//1. EXTERNAL.....
//2. MODULES.....
//3. INLINE......

//props = read-only properties that are shared between components ........
//        A parent components can send data to a child components ......
//        <Components key=value />


// conditional rendering = Allows you to control whta gets randered in your application
// based on certain condition(show, hide, or change Components)