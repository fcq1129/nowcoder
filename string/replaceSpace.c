���дһ�����������ַ����еĿո�ȫ���滻Ϊ��%20�����ٶ����ַ������㹻�Ŀռ����������ַ�������֪���ַ�������ʵ����(С�ڵ���1000)��ͬʱ��֤�ַ����ɴ�Сд��Ӣ����ĸ��ɡ�
����һ��string iniString Ϊԭʼ�Ĵ����Լ����ĳ��� int len, �����滻���string��
����������
"Mr John Smith��,13
���أ�"Mr%20John%20Smith"
��Hello  World��,12
���أ���Hello%20%20World��

/*******************************************************************
********************************************************************
********************************************************************/

class Replacement {
public:
    string replaceSpace(string iniString, int length) {
        // write code here
        int countSpace = 0;
        for(int i=0; i<length; i++)
            if(iniString[i]==' ') 
            	countSpace++;
        int newLength = length+2*countSpace;
        iniString.resize(newLength);
        newLength--;
        for(int i=length-1; i>=0; i--) {
            if(iniString[i] == ' ') {
                iniString[newLength--] = '0';
                iniString[newLength--] = '2';
                iniString[newLength--] = '%';
            }
            else
                iniString[newLength--] = iniString[i];
        }
        return iniString;
    }
};