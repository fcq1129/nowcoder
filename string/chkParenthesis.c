����һ���ַ����������һ���㷨���ж����Ƿ�Ϊһ���Ϸ������Ŵ���
����һ���ַ���A�����ĳ���n���뷵��һ��boolֵ�������Ƿ�Ϊһ���Ϸ������Ŵ���
����������
"(()())",6
���أ�true
����������
"()a()()",7
���أ�false
����������
"()(()()",7
���أ�false

/*************************************************************************
************************************************************************/

class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
        // write code here
        int numParenthesis = 0;
        for(int i=0; i <n; i++) {
            if(A[i]=='(')
                numParenthesis++;
            else if(A[i]==')')
                numParenthesis--;
                else 
                	return false;
            
            if(numParenthesis < 0)
                return false;               
        }
        if(numParenthesis == 0)
            return true;
        else
            return false;
    }
};
