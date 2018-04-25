#ifndef MYVERTICES_H
#define MYVERTICES_H

float init_obj_vertices[] = {
	//  �����
	-0.2f, -0.2f, -0.2f, 0.0f, 0.0f, -1.0f,
	0.2f, -0.2f, -0.2f, 0.0f, 0.0f, -1.0f,
	0.2f,  0.2f, -0.2f, 0.0f, 0.0f, -1.0f,
	0.2f,  0.2f, -0.2f, 0.0f, 0.0f, -1.0f,
	-0.2f,  0.2f, -0.2f, 0.0f, 0.0f, -1.0f,
	-0.2f, -0.2f, -0.2f, 0.0f, 0.0f, -1.0f,

	//  ǰ����
	-0.2f, -0.2f,  0.2f, 0.0f, 0.0f, 1.0f,
	0.2f, -0.2f,  0.2f, 0.0f, 0.0f, 1.0f,
	0.2f,  0.2f,  0.2f, 0.0f, 0.0f, 1.0f,
	0.2f,  0.2f,  0.2f, 0.0f, 0.0f, 1.0f,
	-0.2f,  0.2f,  0.2f, 0.0f, 0.0f, 1.0f,
	-0.2f, -0.2f,  0.2f, 0.0f, 0.0f, 1.0f,

	//  �����
	-0.2f,  0.2f,  0.2f, -1.0f, 0.0f, 0.0f,
	-0.2f,  0.2f, -0.2f, -1.0f, 0.0f, 0.0f,
	-0.2f, -0.2f, -0.2f, -1.0f, 0.0f, 0.0f,
	-0.2f, -0.2f, -0.2f, -1.0f, 0.0f, 0.0f,
	-0.2f, -0.2f,  0.2f, -1.0f, 0.0f, 0.0f,
	-0.2f,  0.2f,  0.2f, -1.0f, 0.0f, 0.0f,

	//  �ұ���
	0.2f,  0.2f,  0.2f, 1.0f, 0.0f, 0.0f,
	0.2f,  0.2f, -0.2f, 1.0f, 0.0f, 0.0f,
	0.2f, -0.2f, -0.2f, 1.0f, 0.0f, 0.0f,
	0.2f, -0.2f, -0.2f, 1.0f, 0.0f, 0.0f,
	0.2f, -0.2f,  0.2f, 1.0f, 0.0f, 0.0f,
	0.2f,  0.2f,  0.2f, 1.0f, 0.0f, 0.0f,

	//  �����
	-0.2f, -0.2f, -0.2f, 0.0f, -1.0f,  0.0f,
	0.2f, -0.2f, -0.2f, 0.0f, -1.0f,  0.0f,
	0.2f, -0.2f,  0.2f, 0.0f, -1.0f,  0.0f,
	0.2f, -0.2f,  0.2f, 0.0f, -1.0f,  0.0f,
	-0.2f, -0.2f,  0.2f, 0.0f, -1.0f,  0.0f,
	-0.2f, -0.2f, -0.2f, 0.0f, -1.0f,  0.0f,

	//  ǰ����
	-0.2f,  0.2f, -0.2f, 0.0f, 1.0f,  0.0f,
	0.2f,  0.2f, -0.2f, 0.0f, 1.0f,  0.0f,
	0.2f,  0.2f,  0.2f, 0.0f, 1.0f,  0.0f,
	0.2f,  0.2f,  0.2f, 0.0f, 1.0f,  0.0f,
	-0.2f,  0.2f,  0.2f, 0.0f, 1.0f,  0.0f,
	-0.2f,  0.2f, -0.2f, 0.0f, 1.0f,  0.0f
};

float init_light_vertices[36][3] = {
	-0.05f, -0.05f, -0.05f,
	0.05f, -0.05f, -0.05f,
	0.05f,  0.05f, -0.05f,
	0.05f,  0.05f, -0.05f,
	-0.05f,  0.05f, -0.05f,
	-0.05f, -0.05f, -0.05f,

	-0.05f, -0.05f,  0.05f,
	0.05f, -0.05f,  0.05f,
	0.05f,  0.05f,  0.05f,
	0.05f,  0.05f,  0.05f,
	-0.05f,  0.05f,  0.05f,
	-0.05f, -0.05f,  0.05f,

	-0.05f,  0.05f,  0.05f,
	-0.05f,  0.05f, -0.05f,
	-0.05f, -0.05f, -0.05f,
	-0.05f, -0.05f, -0.05f,
	-0.05f, -0.05f,  0.05f,
	-0.05f,  0.05f,  0.05f,

	0.05f,  0.05f,  0.05f,
	0.05f,  0.05f, -0.05f,
	0.05f, -0.05f, -0.05f,
	0.05f, -0.05f, -0.05f,
	0.05f, -0.05f,  0.05f,
	0.05f,  0.05f,  0.05f,

	-0.05f, -0.05f, -0.05f,
	0.05f, -0.05f, -0.05f,
	0.05f, -0.05f,  0.05f,
	0.05f, -0.05f,  0.05f,
	-0.05f, -0.05f,  0.05f,
	-0.05f, -0.05f, -0.05f,

	-0.05f,  0.05f, -0.05f,
	0.05f,  0.05f, -0.05f,
	0.05f,  0.05f,  0.05f,
	0.05f,  0.05f,  0.05f,
	-0.05f,  0.05f,  0.05f,
	-0.05f,  0.05f, -0.05f
};


void setObjVertices(float(&vertices)[36][6]);
void setLightVertices(float(&vertices)[36][3]);

void setObjVertices(float(&vertices)[36][6]) {
	for (int i = 0; i < 36; i++) {
		for (int j = 0; j < 6; j++) {
			vertices[i][j] = init_obj_vertices[i * 6 + j];
		}
	}
}

void setLightVertices(float(&vertices)[36][3]) {
	for (int i = 0; i < 36; i++) {
		for (int j = 0; j < 3; j++) {
			vertices[i][j] = init_light_vertices[i][j];
		}
	}
}

#endif