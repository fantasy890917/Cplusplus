#pragma once
class InlineTest
{
    public:
    void f1(int x);

    /**
     * @brief ���ж����˵ĺ�������ʽ��������,����Ҫ���Ϊ����������������ʵ�ִ�(���崦)��inline�ؼ��֡�
     *
     * @param x
     * @param y
     */
    void Foo(int x, int y) ///< ���弴��ʽ����������
    {

    };
    //void f1(int x); ///< ������Ҫ���Ϊ���������������ڶ��崦��inline�ؼ��֡�

};

