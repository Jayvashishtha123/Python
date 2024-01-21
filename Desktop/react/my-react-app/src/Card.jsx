import jaypic from './assets/jay.jpeg'

function Card(){
    return(
        <div className="card">
            <img className="card-image" src={jaypic}  alt="Profile image"></img>
            <h2 className='card-title'>Jay vashishtha</h2>
            <p className='card-text'>I am studying Programming and play video games...</p>
        </div>
    );
}
export default Card