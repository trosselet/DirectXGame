#pragma comment(lib,"d3d11.lib")
#pragma comment(lib,"d3dcompiler.lib")

#include "GraphicsEngine.h"
#include "RenderSystem.h"

#include <d3dcompiler.h>

GraphicsEngine::GraphicsEngine()
{
}

bool GraphicsEngine::init()
{
    m_render_system = new RenderSystem();
    m_render_system->init();
    return true;
}


bool GraphicsEngine::release()
{
    m_render_system->release();
    delete m_render_system;
    return true;
}

RenderSystem* GraphicsEngine::getRenderSystem()
{
    return m_render_system;
}

GraphicsEngine::~GraphicsEngine()
{
}

GraphicsEngine* GraphicsEngine::get()
{
    static GraphicsEngine engine;
    return &engine;
}