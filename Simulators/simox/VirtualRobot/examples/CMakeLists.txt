
FIND_PACKAGE (RBDL)

if (RBDL_FOUND) 
        ADD_SUBDIRECTORY(InverseDynamics)
endif (RBDL_FOUND)

ADD_SUBDIRECTORY(loadRobot)

ADD_SUBDIRECTORY(CameraViewer)
ADD_SUBDIRECTORY(RobotViewer)
ADD_SUBDIRECTORY(RobotViewerOSG)
ADD_SUBDIRECTORY(SceneViewer)
ADD_SUBDIRECTORY(Jacobi)
ADD_SUBDIRECTORY(GenericIK)
ADD_SUBDIRECTORY(reachability)
ADD_SUBDIRECTORY(stability)
ADD_SUBDIRECTORY(GraspEditor)

ADD_SUBDIRECTORY(ReachabilityMap)
ADD_SUBDIRECTORY(loadURDFRobot)

