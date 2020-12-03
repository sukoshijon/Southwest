#include "Scene.h"

using namespace SouthwestEngine;

void Scene::SetMainCamera(Camera* c) {
	MainCamera = c;
}

Camera* Scene::GetMainCamera() {
	return MainCamera;
}