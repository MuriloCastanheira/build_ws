cmake_minimum_required(VERSION 3.8)
project(icrane_msgs)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED) 
find_package(vision_msgs REQUIRED)
find_package(nav_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Vector2D.msg"
  "msg/Pose2D.msg"
  "msg/BoundingBox2D.msg"
  "msg/Detection2D.msg"
  "msg/Detection2DArray.msg"
  "msg/DetectionSeg2D.msg"
  "msg/DetectionSeg2DArray.msg"
  "msg/Polygon2D.msg"
  "msg/DetectionSeg3D.msg"
  "msg/DetectionSeg3DArray.msg"
  "msg/OmniverseInfo.msg"
  "msg/TrackedEntities.msg"
  "msg/Modeling.msg"
  DEPENDENCIES std_msgs geometry_msgs sensor_msgs vision_msgs nav_msgs  # Adicione sensor_msgs aqui
)

ament_package()
