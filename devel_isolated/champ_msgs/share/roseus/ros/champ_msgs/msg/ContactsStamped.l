;; Auto-generated. Do not edit!


(when (boundp 'champ_msgs::ContactsStamped)
  (if (not (find-package "CHAMP_MSGS"))
    (make-package "CHAMP_MSGS"))
  (shadow 'ContactsStamped (find-package "CHAMP_MSGS")))
(unless (find-package "CHAMP_MSGS::CONTACTSSTAMPED")
  (make-package "CHAMP_MSGS::CONTACTSSTAMPED"))

(in-package "ROS")
;;//! \htmlinclude ContactsStamped.msg.html
(if (not (find-package "GEOMETRY_MSGS"))
  (ros::roseus-add-msgs "geometry_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass champ_msgs::ContactsStamped
  :super ros::object
  :slots (_header _contacts _reactions ))

(defmethod champ_msgs::ContactsStamped
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:contacts __contacts) (let (r) (dotimes (i 0) (push nil r)) r))
    ((:reactions __reactions) (let (r) (dotimes (i 0) (push (instance geometry_msgs::Vector3 :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _contacts __contacts)
   (setq _reactions __reactions)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:contacts
   (&optional __contacts)
   (if __contacts (setq _contacts __contacts)) _contacts)
  (:reactions
   (&rest __reactions)
   (if (keywordp (car __reactions))
       (send* _reactions __reactions)
     (progn
       (if __reactions (setq _reactions (car __reactions)))
       _reactions)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; bool[] _contacts
    (* 1    (length _contacts)) 4
    ;; geometry_msgs/Vector3[] _reactions
    (apply #'+ (send-all _reactions :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; bool[] _contacts
     (write-long (length _contacts) s)
     (dotimes (i (length _contacts))
       (if (elt _contacts i) (write-byte -1 s) (write-byte 0 s))
       )
     ;; geometry_msgs/Vector3[] _reactions
     (write-long (length _reactions) s)
     (dolist (elem _reactions)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; bool[] _contacts
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _contacts (make-list n))
     (dotimes (i n)
     (setf (elt _contacts i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     ))
   ;; geometry_msgs/Vector3[] _reactions
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _reactions (let (r) (dotimes (i n) (push (instance geometry_msgs::Vector3 :init) r)) r))
     (dolist (elem- _reactions)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get champ_msgs::ContactsStamped :md5sum-) "3fa2cbd07de707c129881426493b5047")
(setf (get champ_msgs::ContactsStamped :datatype-) "champ_msgs/ContactsStamped")
(setf (get champ_msgs::ContactsStamped :definition-)
      "Header header
bool[] contacts
geometry_msgs/Vector3[] reactions

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :champ_msgs/ContactsStamped "3fa2cbd07de707c129881426493b5047")


