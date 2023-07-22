//
//
//Movie DataBase
//created by Yseeva
//

#include <iostream>

class Node
{
public:
   std::string name;
   Node* left , *right;

};
Node* CreateNode(std::string name){
  Node* newnode= new Node();
  newnode->name=name;
  newnode->left =NULL;
  newnode->right=NULL;
  return newnode;
}
void PrintRoot(Node *root ){
    if(root==NULL){

      return;
    }
    else
    std::cout<<root->name<<std::endl;
    PrintRoot(root->right);
    PrintRoot(root->left);
}
void PrintRootRight(Node *root ){
    if(root==NULL){

      return;
    }
    else
    std::cout<<root->name<<std::endl;
    PrintRoot(root->right);
    //PrintRoot(root->left);
}
class MovieProd{

  public:
  int Option;
   MovieProd () {
    std::cout<<"        This option tells you what movie each producer has --> "<<std::endl<<'\a';
    std::cout<<"               Enter your desired producer number :"<<std::endl;
    std::cout<<" - 1 : Francis Lawrence \n - 2 : Harry Brad \n - 3 : Zack Snyder \n - 4 : Patty Jenkins \n - 5 : Olivia Wilde \n - 6 : christopher Nolan \n - 7 : Mat Reeves \n";

  }
  void MProd(){
    
    switch (Option)
    {
    case 1:
      {
        Node* link=CreateNode(" Francis Lawrence");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("hunger games");
        PrintRoot(link);
      }
      break;
    case 2:
    {
      {
        Node* link=CreateNode("Harry Brad");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Enola Holmes");
        PrintRoot(link);
      }
      break;
    }
    case 3:
    {
      {
        Node* link=CreateNode("Zack Snyder");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Batman vs Superman");
        PrintRoot(link);
      }
    }
    break;
    case 4:
    {
      {
        Node* link=CreateNode(" Patty Jenkins");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Wonder Woman 1984");
        PrintRoot(link);
      }
    }
    break;
    case 5:
    {
      {
        Node* link=CreateNode(" Olivia Wilde");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Don't worry darling");
        PrintRoot(link);
      }
    }
    break;
     case 6:
    {
      {
         Node* link=CreateNode("Christopher Nolan");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Dunkirk");
        link->left=CreateNode("Tenet");
        PrintRoot(link);
      }
    }
    break;
    case 7:
    {
      {
         Node* link=CreateNode("Mat Reeves");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("The Batman");
        PrintRoot(link);
      }
    }
    /*break;
    default:
      break;
      */
    }
  }
};
class ActMovie {
  public:
  int option;
  ActMovie(){
    std::cout<<"          This option shows you the movies of a specific actor/actress \n";
    std::cout<<"               Enter your desired actor/actress number :"<<std::endl;
    std::cout<<" - 1 : Jennifer Lawrence \n - 2 : Sam cliffin  \n - 3 : Henry Cavil \n - 4 : Gal Gadot \n - 5 : Chris Pine \n - 6 : Harry Styles \n - 7 : Tom Hardy \n - 8 : Robert Pattinson \n - 9 : Elizabeth Debicki \n - 10 : Zoe Kravitz \n";

  }
  void ActorMovie(){
     switch (option) {
case 1:
    {
      {
         Node* link=CreateNode(" Jennifer Lawrence");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("the hunger games");
        PrintRoot(link);
      }
    }break;
    case 2:
    {
      {
         Node* link=CreateNode("Sam cliffin");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("the hunger games");
        link->left=CreateNode("Enola holmes");
        PrintRoot(link);
      }
    }break;
    case 3:
    {
      {
         Node* link=CreateNode("Henry Cavil");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Enola Holmes");
        link->left=CreateNode("Batman VS superman");
        PrintRoot(link);
      }
    }
    break;
    case 4:
    {
      {
         Node* link=CreateNode("Gal Gadot");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Batman Vs superman");
        link->left=CreateNode("Wonder Woman 1984");
        PrintRoot(link);
      }
    }break;
    case 5:
    {
      {
         Node* link=CreateNode("Chris Pine");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Wonder Woman 1984");
        link->left=CreateNode("don't worry Darling");
        PrintRoot(link);
      }
    }break;
    case 6:
    {
      {
         Node* link=CreateNode("Harry Styles");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("don't worry Darling");
        link->left=CreateNode("Dunkirk");
        PrintRoot(link);
      }
    }break;
    case 7:
    {
      {
         Node* link=CreateNode("Tom Hardy");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Dunkirk");
        PrintRoot(link);
      }
    }break;
    case 8:
    {
      {
         Node* link=CreateNode("Robert Pattinson ");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("The Batman");
        link->left=CreateNode("tenet");
        PrintRoot(link);
      }
    }break;
    case 9:
    {
      {
         Node* link=CreateNode("Elizabeth Debicki");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Tenet");
        PrintRoot(link);
      }
    }
    break;
    case 10:
    {
      {
         Node* link=CreateNode("Zoe Kravitz");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("The Batman");
        PrintRoot(link);
      }
    }break;
    }
     }
  }

;
class ProdActor{

  public:
  int Option;
   ProdActor() {
    std::cout<<"        This option tells you which actor/actress each producer has worked with  --> "<<std::endl<<'\a';
    std::cout<<"               Enter your desired producer number :"<<std::endl;
    std::cout<<" - 1 : Francis Lawrence \n - 2 : Harry Brad \n - 3 : Zack Snyder \n - 4 : Patty Jenkins \n - 5 : Olivia Wilde \n - 6 : christopher Nolan \n - 7 : Mat Reeves \n";

  }
  void AProd(){
    
    switch (Option)
    {
    case 1:
      {
        Node* link=CreateNode(" Francis Lawrence");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Jennifer Lawrence");
        link->right->right=CreateNode("Sam clafilin");
        PrintRootRight(link);
      }
      break;
    case 2:
    {
      {
        Node* link=CreateNode("Harry Brad");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Henry Cavil");
        link->right->right=CreateNode("Sam clafilin");
        PrintRootRight(link);
      }
      break;
    }
    case 3:
    {
      {
        Node* link=CreateNode("Zack Snyder");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Henry Cavil");
        link->right->right=CreateNode("Gal Gadot");
        PrintRootRight(link);
      }
    }
    break;
    case 4:
    {
      {
        Node* link=CreateNode(" Patty Jenkins");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Gal Gadot");
        link->right->right=CreateNode("Chris Pine");
        PrintRootRight(link);
      }
    }
    break;
    case 5:
    {
      {
        Node* link=CreateNode(" Olivia Wilde");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Harry Styles");
        link->right->right=CreateNode("Chris pine");
        PrintRootRight(link);
      }
    }
    break;
     case 6:
    {
      {
         Node* link=CreateNode("Christopher Nolan");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Harry styles");
        link->right->right=CreateNode("Tom hardy");
        link->right->right->right=CreateNode("robert Pattinson");
        link->right->right->right->right=CreateNode("Elizabeth Debinski");
        PrintRootRight(link);
      }
    }
    break;
    case 7:
    {
      {
         Node* link=CreateNode("Mat Reeves");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Robert Pattinson");
        link->right->right=CreateNode("Zoe Kravitz");
        PrintRootRight(link);
      }
    }
    break;
    /*break;
    default:
      break;
      */
    }
  }
};
class MovieActor{
  public:
  int Option;
   MovieActor () {
    std::cout<<"        This option tells you what actor/actresses act in a specific movie --> "<<std::endl<<'\a';
    std::cout<<"               Enter your desired movie number :"<<std::endl;
    std::cout<<" - 1 : Hunger Games \n - 2 : Enola Holmes \n - 3 : Batman vs Superman \n - 4 : Wonder woman 1984 \n - 5 : Don't worry Darling \n - 6 : Dunkirk \n - 7 : Tenet \n - 8 : The Batman \n";

  }
  void MAct(){
    
    switch (Option)
    {
    case 1:
      {
        Node* link=CreateNode(" Hunger Games");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Jennifer Lawrence");
        link->right->left=CreateNode("Liam Hamsworth");
        link->left->right=CreateNode("Josh Hutcherson");
        link->left->left=CreateNode("Sam Claifilin");
        PrintRoot(link);
      }
      break;
    case 2:
    {
      {
        Node* link=CreateNode("Enola Holmes");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Millie Bobby Brown");
        link->right->right=CreateNode("Henry Cavil");
        link->right->left=CreateNode("Sam Clafilin");

        PrintRoot(link);
      }
      break;
    }
    case 3:
    {
      {
        Node* link=CreateNode("Batman vs Superman");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Henry Cavil");
        link->right->right=CreateNode("Ben Affleck");
        link->left->right=CreateNode("Gal Gadot");
        PrintRoot(link);
      }
    }
    break;
    case 4:
    {
      {
        Node* link=CreateNode("Wonder Woman 1984");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Gal Gadot");
        link->right->left=CreateNode("Chris Pine");
        link->right->right=CreateNode("Pedro Pascal");

        PrintRoot(link);
      }
    }
    break;
    case 5:
    {
      {
        Node* link=CreateNode(" Don't worry Darling");
        std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Harry styles");
        link->right->left=CreateNode("Chris pine");
        link->right->right=CreateNode("Florence Pugh");
        PrintRoot(link);
      }
    }
    break;
     case 6:
    {
      {
         Node* link=CreateNode("Dunkirk");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Harry Styles");
        link->left=CreateNode("Tom Hardy");
        link->right->right=CreateNode("Cillian Morphy");
        PrintRoot(link);
      }
    }
    break;
    case 7:
    {
      {
         Node* link=CreateNode("Tenet");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Robert Pattinson");
        link->right->left=CreateNode("John WAshington");
        PrintRoot(link);
      }
    }
    break;
    case 8:
    {
      {
         Node* link=CreateNode("The Batman");
         std::cout<<" --> "<<std::endl;
        link->right=CreateNode("Robert Pattinson");
        link->right->left=CreateNode("Zoe Kravitz");
        link->left=CreateNode("Paul Dano");
        PrintRoot(link);
      }
    }
    break;
    /*break;
    default:
      break;
      */
    }
  }
};
class ReleaseDate{
  public:
  ReleaseDate(){
     std::cout<<"        This option tells you what movies have been made at a certain year --> "<<std::endl<<'\a';
     std::cout<<"               Enter your desired year  :"<<std::endl;
   
  }
  int opt;
  void Setter(int opt){
    this->opt=opt;
  }
  void ShowDate(){
    switch (opt)
    {
    case 2015: 
    std::cout<<"2015 --> " <<"Hunger Games"<<std::endl;
    break;
    case 2020: {
      Node* link;
      link->right=CreateNode("2020 --> ");
      link->left=CreateNode("Enola Holmes");
      link->left->left=CreateNode("Wonder Woman 1984");
      link->left->right=CreateNode("Tenet");
      PrintRoot(link);
    }
    break;
    case 2016:{
      std::cout<<"Batman vs Superman"<<std::endl;
    }
    break;
    case 2017 : {
      std::cout<<"Dunkirk"<<std::endl;
    }
    break;
    case 2022: {
      Node* list;
      list->left=CreateNode("2022 -- > ");
      list->left->right=CreateNode("The Batman");
      list->left->left=CreateNode("Don't Worry DArling");
      PrintRoot(list);
    }
    break;
    default :{
     std::cout<<"There was no movie back then which I will be aware of"<<std::endl;
    }
    break;

    }
  }

};
class Menu{
  public:
  Menu(){
    std::cout<<"        |||| WELCOME TO MY PROGRAM |||| \n";
    std::cout<<" 1- Show me all the movies of a producer \n 2- Show me all the movies of an actor \n 3- Show me the actors and pruducers relation \n 4- Show me a movie's actors \n 5- Show me the movies in a year \n";
    std::cout<<"Eneter your choice"<<std::endl;
  }
 ~Menu(){

  std::cout<<"Thanks for your Gracious Time"<<std::endl;
 }
};

int main(){ 
  int num;
  Menu me;
  std::cin>>num;
  switch (num)
  {
  case 1:
    {
      MovieProd mp; //film va kargardan
  std::cout<<"enter";
  int opt;
  std::cin>>mp.Option;
  mp.MProd();
  std::cout<<" ---- "<<std::endl;
    }
    break;
  case 2 :
  {
int op2;
  
  ActMovie ac; //bazigar va film
  std::wcin>>op2;
  ac.option=op2;
  ac.ActorMovie();
  std::cout<<" -------- "<<std::endl;
  }
  break;
  case 3 :
  {
ProdActor prd; //bazigar kargardan

std::wcin>>prd.Option;
prd.AProd();
  }
  break;
  case 4:
  {
MovieActor mv; //bazigar film
std::wcin>>mv.Option;
mv.MAct();
  }
  break;
  case 5:
  {
ReleaseDate rd; //film va sal
std::wcin>>rd.opt;
rd.ShowDate();

  }
  }
    return 0 ;
}