# PolygonSegmentation.msg

# yolov8 detection

# class probability
int32 class_id
string label
float64 score

# ID for tracking
string id

# Polygon for segmentation
sensor_msgs/PointCloud2 mask_pcd

vision_msgs/BoundingBox3D bbox