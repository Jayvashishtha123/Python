function List(props){
    const category = props.category;
  const itemList = props.items;
//    fruits.sort(
//     (a,b) => a.name.localCompare(b.name)
//    );
//fruits.sort((a,b)=> b.name.localeCompare(a.name));
//fruits.sort((a,b) => a.calories - b.calories);

//const lowCalFruit = fruits.filter(fruit => fruit.calories < 100);
//const highCalFruit = fruits.filter(fruit => fruit.calories >= 100);

   const listItems = itemList.map(item => <li key={item.id}>
                                          {item.name}: &nbsp;
                                          <b>{item.calories}</b></li>)

   return( <>
   <h3 className="list-category">{category}</h3>
   <ol className="list-items">{listItems}</ol>
   </>
   );
  
   
}
// List.propTypes ={
//   category: PropTypes.string,
//   items: PropTypes.arrayof(PropTypes.shape({id: PropTypes.number,
//                                             name: PropTypes.string,
//                                           calories: PropTypes.number})),
// }

List.defaultProps = {
    category: "Category",
    items: [],
}


export default List  