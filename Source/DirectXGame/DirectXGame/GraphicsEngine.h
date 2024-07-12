#pragma once
#include <d3d11.h>
#include "Prerequistes.h"
#include "RenderSystem.h"


class GraphicsEngine
{
public:
    GraphicsEngine();
    //Initialize the GraphicsEngine and DirectX 11 Device
    bool init();
    //Release all the resources loaded
    bool release();
    RenderSystem* getRenderSystem();
    ~GraphicsEngine();
public:
    static GraphicsEngine* get();

public:
    RenderSystem* m_render_system = nullptr;
};