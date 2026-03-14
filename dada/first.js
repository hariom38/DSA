


//-->method 2 to create element by creating a library /object 
const obj={
  create_element:function(tag,styles,children){
    const element=document.createElement(tag);
    //style of element 
    for(let key in styles){
      element.style[key]=styles[key];
    }
    if(typeof children==='object'){
      for(let val of children){
        element.append(val)
      }
    }
    else{
       element.innerText=children;
    }

   
    return element;
  }
}
const header1=obj.create_element('h1',{fontSize:"30px",color:"blue",backgroundColor:"yellow"},"hello meet")
const header2=obj.create_element('h2',{fontSize:"30px",color:"red",backgroundColor:"black"},"hello meet")

const root=document.getElementById('root');

root.append(header1,header2);


const li1=obj.create_element('li',{color:"white"},"HTML")
const li2=obj.create_element('li',{color:"pink"},"CSS")
const li3=obj.create_element('li',{color:"green"},"JS")

const ul1=obj.create_element('ul',{fontSize:"30px",color:"blue",backgroundColor:"black"},[li1,li2,li3])
root.append(ul1)