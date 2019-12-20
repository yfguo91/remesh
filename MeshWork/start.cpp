#include"externalcommon.h"
#include"internalcommon.h"
#include<iostream>
#include<cstring>
#include<fstream>
#include <time.h>
using namespace std;
using namespace meshwork;
void main (){
	string strMeshFile = "homer.stl";
	ifstream ist(strMeshFile);
	if(!ist){
		cout<<"file error"<<endl;
		return;
	}
	mparam.maxh=0.01;
	mparam.minh=0.002;
	STLGeometry geom;

	
	geom.Load(ist);
	Mesh mh;
	mh.SetGlobalH(mparam.maxh);
	clock_t ts=clock();
	MW_STLSurfaceMeshing(geom,mh);
	clock_t te=clock();
	cout<<0<<" tests "<<(te-ts)/1000.<<" sec."<<endl;
	MW_WriteSTLFormat(&mh, "myhomer.stl");
	cout<<"complete!!!!"<<endl;
}
