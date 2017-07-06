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
