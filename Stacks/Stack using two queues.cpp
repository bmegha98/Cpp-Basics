void QueueStack :: push(int x)
{
        // Your Code
        if(q1.empty())
            q1.push(x);
        else
        {
            while(!q1.empty())
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(x);
            while(!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code  
        if(q1.empty())
            return -1;
        int x = q1.front();
        q1.pop();
        return x;
}
