//https://leetcode.cn/problems/pascals-triangle/
//118. ������� 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> vv;
     vv.resize(numRows);//����n������
     //��ʼ��
     for(int i=0;i<vv.size();i++)
     {   
         //������ǣ�ÿ�и�������
          vv[i].resize(i+1,0);
          
          //��ʼ��ÿһ�е��׸������һ��
          vv[i][0]=1;
          vv[i][vv[i].size()-1]=1;
     }
    
    //����������ǣ������м�����
    for(int i=0;i<vv.size();i++)
    {
        for(int j=0;j<vv[i].size();j++)
        {    
            //�м�����֣�����i-1�е�j-1�����ֺ�i-�е�j��������ӣ�
            if(vv[i][j]==0)
            vv[i][j]=vv[i-1][j-1]+vv[i-1][j];
        }
    }
    return vv;
    } 
};
