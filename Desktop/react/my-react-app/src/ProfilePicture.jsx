function ProfilePic(){

    const imageUrl = './src/assets/jay.jpeg';
    const handleClick = (e) => e.target.style.display = "none";
    return (<img onClick={(e) => handleClick(e)} src={imageUrl}></img>);
}


export default ProfilePic