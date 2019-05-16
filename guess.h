using namespace std;
game_start()
{
    int n,x,y;
    
	system("COLOR 1A");
    cout<<"###########################Guessing Game###########################\n";
    
    srand(time(NULL));
    
	while(1){
    for(n=10;n>=0;){
    	cout<<"\t\tPRESS 99 to EXIT\n\n";
        x=rand()%10+1;		//generate between 1-10
        cout<<"\t\tYour current score is "<<n<<endl;
        cout<<"\t\tComputer takes a number between 1 to 10.\n\t\tNow, guess it.\n:";
        cin>>y;
        if(y==99)
        {
        	goto exit;
		}
        else if(x==y)
        {   n=n+3;
            cout<<"\t\tYou're correct!!!\n\n\n";
             cout<<"\n\n\n";
        }
        else if(x!=y)
        {
        	n--;
        	cout<<"\t\tYou can't guess ...";
            cout<<"\t\tThe number was "<<x;
            cout<<"\n\n\n";
		}
        
    }
    cout<<"\n\n\t\tGAME OVER!!!!!!!\aTry next time...";
    goto exit;
    getch();
	}
    exit:
    return 0;
}
