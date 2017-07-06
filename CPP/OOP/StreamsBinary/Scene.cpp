#include "Scene.h"
#include "Shapes.h"
#include <iostream>
 
Scene::~Scene()
{
    Clear();
}
 
void Scene::Add(IShape* shape)
{
    m_shapes.push_back(shape);
}
 
void Scene::Clear()
{
    for (IShape* shape : m_shapes)
    {
        delete shape;
    }
    m_shapes.clear();
}
 
void Scene::Print(IGraphics* graphics)
{
    for (IShape* shape : m_shapes)
    {
        shape->Draw(graphics);
    }
}
 
void Scene::SaveToStream(std::ostream& stream)
{
    int id = StreamIdSceneBegin;
    stream.write(reinterpret_cast<char*>(&id), sizeof(id));
    for (IShape* shape : m_shapes)
    {
        shape->SaveToStream(stream);
    }
    id = StreamIdSceneEnd;
    stream.write(reinterpret_cast<char*>(&id), sizeof(id));
}
 
void Scene::LoadFromStream(std::istream& stream)
{
    int id;
    int size;
 
    stream.read(reinterpret_cast<char*>(&id), sizeof(id));
    if (id != StreamIdSceneBegin)
    {
        throw ShapeStreamReadException("Scene");
    }
 
    while (true)
    {
        stream.read(reinterpret_cast<char*>(&id), sizeof(id));
        stream.read(reinterpret_cast<char*>(&size), sizeof(size));
        IShape* shape = nullptr;
 
        switch (id)
        {
        case StreamIdCircle:
            shape = new Circle();
        default:
            break;
        }
    }
}
