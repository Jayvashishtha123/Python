import React, {useState} from 'react';

function MyComponent(){
    const [name,setName] = useState("guest");
    const [quantity, setquantity] = useState(1);
    const [Comment, setComment] = useState("");
    const [payment, setPayment] = useState("Gift");
    const [shiping,setshiping] = useState("Delivery");


    function handleNameChange(event){
        setName(event.target.value);
    }
    function handleQuantityChange(event){
        setquantity(event.target.value);
    }

    function handleCommentChange(event){
      setComment(event.target.value);
    }


    function handlePaymentChange(event){
        setPayment(event.target.value);
    }

    function handleShipingChange(event){
        setshiping(event.target.value);
    }

    return (<>
    <div>
        <input value={name} onChange={handleNameChange}></input>
        <p>Name: {name}</p>

        <input value={quantity} onChange={handleQuantityChange} type='number'/>
        <p>Quantity:  {quantity}</p>

        <textarea value={Comment} onChange={handleCommentChange}
          placeholder='Enter delivery indtructions'></textarea>
          <p>Comment: {Comment}</p>

          <select value={payment} onChange={handlePaymentChange} ><option value="">
            Select an Option:
            </option>
            <option value="Visa">Visa</option>
            <option value="MaterCard">Master card</option>
            <option value="GiftCard">GiftCard</option>

            </select>
            <p>Payment: {payment}</p>

            <label>
                <input type='radio' value= "Pick up" 
                checked={shiping == "Pick up"}
                onChange={handleShipingChange}></input>
                Pick Up
            </label><br/>
            <label>
            <input type='radio' value= "Delivery" 
                checked={shiping == "Delivery"}
                onChange={handleShipingChange}></input>
                Delivery
            </label>
            <p>Shiping: {shiping}</p>

        </div></>)
}

export default MyComponent