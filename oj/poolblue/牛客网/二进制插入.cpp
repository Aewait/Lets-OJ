class BinInsert {
public:
    int binInsert(int n, int m, int j, int i) {
        //ֻ������jλȻ�����������Եõ�
        return n | (m << j);
    }
};
