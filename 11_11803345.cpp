void QueueStack :: push(int x)
{
// Your Code
q1.push(x);
}

int QueueStack :: pop()
{
// Your Code
if(q1.empty())
return -1;
else
{
while(q1.size()>1)
{
int x=q1.front();
q1.pop();
q2.push(x);
}
int y=q1.front();
q1.pop();
while(!q2.empty())
{
int x=q2.front();
q2.pop();
q1.push(x);
}
return y;
}
}