#pragma once


class InputListener
{

public:
    InputListener()
    {

    }
    ~InputListener()
    {

    }

    //pure virtual callback function

    virtual void onKeyDown(int key) = 0;
    virtual void onKeyUp(int key) = 0;
};