class UnusualAdd {
public:
    int addAB(int A, int B) { 
        int _xol=0;
        int _and =0;
        //xor ������Ľ����δ��λ����� and ��Ž�λ����� ͨ��λ�Ʋ���
        while(B!=0)
        {
            _xol=A^B;
            _and=(A&B)<<1;
            A=_xol;
            B=_and;
       }
        return A;
    }
};
