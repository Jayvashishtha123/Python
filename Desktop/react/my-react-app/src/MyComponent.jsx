import React, {useState} from 'react';
function MyComponent(){
    const [name, setName] = useState("Guest");
    const [age, setAge] = useState(0);
    const [isEmployes, setisEmployed] = useState(false);

    const updateName = ()=> {
        setName("jay");
    }
    const incrementAge = ()=> {
        setAge(age + 2);
    }

    const IsEmployed = ()=> {
        setisEmployed(!isEmployes);
    }



    return (<div>
        <p>Name: {name}</p>
        <button onClick={updateName}>Set Name</button>

        <p>Age: {age}</p>
        <button onClick={incrementAge}>Increment age</button>

        <p>Is Employed: {isEmployes ? "Yes" : "No"}</p>
        <button onClick={IsEmployed}>Is Employed</button>
    </div>)


}

export default MyComponent