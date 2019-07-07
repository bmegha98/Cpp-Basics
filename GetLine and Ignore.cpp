/*
There are many times when when need to take input of a string that contains multiple words.
Here, we will learn how to take input of a string that comprises of multiple words. Also,we will learn to clear the input buffer. Your task
is to take input of strings and integers and produce the output.
After taking input by cin , it adds new line character in buffer after pressing enter and the program skips the following input of
container.Therefore ,we need to flush the newline character out of the buffer in between.
*/

void getLineAndIgnore(){
    
    string a, d;
    int b;
    
    getline(cin,a);
   
    cin>>b;
    
    cin.ignore();
    
    getline(cin,d);
   
    cout << a << endl;
    
    cout << b << endl;
        
    cout << d << endl;
}
