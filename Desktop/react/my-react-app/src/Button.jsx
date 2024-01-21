
function Button(){

const handleClick = (e) => e.target.textContent = "Ouch! 😀";

    // let count=0;

    // const handleClick = (name) => {
    //     if(count < 3 ){
    //         count++;
    //         console.log(`${name} You clicked me more than 3 times........`);
    //     }
    //     else{
    //         console.log(`${name} Plaease stop clicking me.............`)
    //     }
    // };
    
    return (
    <button onDoubleClick={(e) => handleClick(e)}>Click me 😆</button>
    );
}

export default Button