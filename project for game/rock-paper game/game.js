let userscore= 0;
let compscore= 0;
const choices=document.querySelectorAll(".choice");
const msgpjg = document.querySelector("#msg");
const userp=document.querySelector("#user-score");
const compp = document.querySelector("#comp-score");

const gencompChoice=()=>{
    const options=["Rock","Paper","Scissor"];
    const randidx =Math.floor(Math.random()*3);
    return options[randidx];

   }
   const showWinner=(userWin,userChoice,compChoice)=>{
    if(userWin){
        console.log("YOU ARE WIN");
        userscore++;
        userp.innerText=userscore;
       msg.innerText=`YOU WIN ! Your ${userChoice} beats ${compChoice}`;
        msg.style.backgroundColor="green";
    }else{
        console.log("YOU LOSE");
        compscore++;
         compp.innerText=compscore;
         msg.innerText=`YOU LOSE ! ${compChoice} beats Your ${userChoice}`;
         msg.style.backgroundColor="red";
    }
   }

const drawGame=()=>{
    console.log("Game was draw");
     msg.innerText="GAME was draw ! Try again";
 msg.style.backgroundColor="rgb(57, 57, 131)";
   
}
const playgame=(userChoice)=>{
console.log("userChoice=",userChoice);
const compChoice=gencompChoice();
console.log("compChoice=",compChoice);
if(userChoice===compChoice){
    drawGame();
} else{
    let userWin=true;
    if(userChoice==="Rock"){
        userWin=compChoice==="Paper" ?false :true;
    }
   else if(userChoice==="Paper"){
    userWin=compChoice==="Scissor" ?false :true;
}
      else{
    userWin=compChoice==="Rock"?false :true;
   
  }
  showWinner(userWin,userChoice,compChoice);
 }
};
choices.forEach((choice)=>{
console.log("choice");
    choice.addEventListener("click",()=>{
        const userChoice=choice.getAttribute("id");
console.log("choice was clicked",userChoice)
      playgame(userChoice);
    });
});

