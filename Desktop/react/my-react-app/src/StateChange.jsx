import React, {useState} from 'react';
 function MyComponent(){
    const [car, setCar ]= useState({year: 2024,
                                    make: "Ford",
                                    model: "Mustang"});
    
    function handleYearChange(event){
        setCar(car => ({...car, year: event.target.value}));
    }
    function handlemakeChange(event){
        setCar(c => ({...car, make: event.target.value}));
        
    }
    function handlemodelChange(event){
        setCar(c => ({...car, model: event.target.value}));
    }
    
    
    return(<div>
        <p>Your favorite car is: {car.year} {car.make} {car.model}</p>
        <input type='number' value={car.year} onChange={handleYearChange}/><br/>
        <input type='text' value={car.make} onChange={handlemakeChange}/><br/>
        <input type='text' value={car.model} onChange={handlemodelChange}/><br/>

    </div>);
}
export default MyComponent