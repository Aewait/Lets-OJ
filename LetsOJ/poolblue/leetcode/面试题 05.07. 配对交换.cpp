//https://leetcode.cn/problems/exchange-lcci/
//������ 05.07. ��Խ��� 
class Solution {
public:
    int exchangeBits(int num) {
    //   ����λȫ1 -> 0101.... ��ʾΪ 0x55555555
    //  ż��λȫ1 -> 1010.... ��ʾΪ 0xaaaaaaaa
    //   ans = (��ȡ����λ << 1) + (��ȡż��λ >> 1)
        return (((num & 0x55555555) << 1) | ((num & 0xaaaaaaaa) >> 1));

    }
};
