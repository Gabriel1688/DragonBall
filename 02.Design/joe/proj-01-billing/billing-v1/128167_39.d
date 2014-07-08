format 74

note 128039 "Bill Amount Confirm Diagram"
  xyzwh 47 21 2000 201 37
usecasecanvas 128167 usecase_ref 128039 // Bill Amount Confirm
  xyzwh 246 135 3005 64 32 label_xy 224 167
end
classcanvas 128295 class_ref 128039 // Client
  class_drawing_mode default show_context_mode default show_stereotype_properties default
  xyz 105 118 3010
end
classcanvas 128423 class_ref 128167 // Terminal
  class_drawing_mode interface show_context_mode default show_stereotype_properties default
  xyz 435 127 2000
end
line 128551 ----
  from ref 128295 z 3011 to ref 128167
line 128679 ----
  from ref 128167 z 3006 to ref 128423
end
