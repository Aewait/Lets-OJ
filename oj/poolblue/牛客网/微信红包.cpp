class Gift {
public:
    int getValue(vector<int> gifts, int n) {
        //������
        sort(gifts.begin(),gifts.end());//���������м�Ľ��Ϊ����
        int mid_val=gifts[n/2];
        int count=0;
        for(const auto& g:gifts)
        {
            if(g==mid_val)//����
                count++;
        }
          if(count>n/2)//�������n/2,���ؽ��
          return mid_val;
        
        return 0;
    }
};
// class Gift {
// public:
//     int getValue(vector<int> gifts, int n) {
//         //��ϣӳ��
//        map<int,int> redgift;
//         for(const auto& e : gifts)
//         {   
//             //����
//             redgift[e]++;
//         }

//         for(auto& r :redgift)
//         {   //�ж�
//             if(r.second>(n/2))
//             return r.first;
//         }
//         return 0;
//     }
// };
