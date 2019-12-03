#pragma once
#include "ParticleProject.h"

class Model
{
public:
	/*  �Լ�   */
	Model(char* path)
	{
		loadModel(path);
	}
	void Draw(Shader shader);
private:
	/*  Model ������  */
	vector<Mesh> meshes;
	string directory;
	/*  �Լ�   */
	void loadModel(string path);
	void processNode(aiNode* node, const aiScene* scene);
	Mesh processMesh(aiMesh* mesh, const aiScene* scene);
	vector<Texture> loadMaterialTextures(aiMaterial* mat, aiTextureType type,
		string typeName);
};