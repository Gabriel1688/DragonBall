format 74

classinstance 128100 class_ref 128002 // client
  name ""   xyz 88 14 2000 life_line_z 2000
classinstance 128228 class_ref 134628 // BackEnd
  name ""   xyz 358 18 2005 life_line_z 2000
durationcanvas 128740 classinstance_ref 128228 // :BackEnd
  xyzwh 384 160 2010 11 40
end
durationcanvas 128868 classinstance_ref 128100 // :client
  xyzwh 100 161 2010 11 25
end
durationcanvas 129124 classinstance_ref 128100 // :client
  xyzwh 100 277 2010 11 40
end
durationcanvas 129252 classinstance_ref 128228 // :BackEnd
  xyzwh 384 277 2010 11 25
end
durationcanvas 129508 classinstance_ref 128228 // :BackEnd
  xyzwh 384 371 2010 11 40
end
durationcanvas 129636 classinstance_ref 128100 // :client
  xyzwh 100 371 2010 11 25
end
durationcanvas 129892 classinstance_ref 128100 // :client
  xyzwh 100 507 2010 11 40
end
durationcanvas 130020 classinstance_ref 128228 // :BackEnd
  xyzwh 384 507 2010 11 25
end
durationcanvas 131812 classinstance_ref 128228 // :BackEnd
  xyzwh 384 579 2010 11 40
end
durationcanvas 131940 classinstance_ref 128100 // :client
  xyzwh 100 579 2010 11 25
end
durationcanvas 132836 classinstance_ref 128100 // :client
  xyzwh 100 212 2010 11 40
end
durationcanvas 133092 classinstance_ref 128100 // :client
  xyzwh 100 431 2010 11 40
end
durationcanvas 133348 classinstance_ref 128100 // :client
  xyzwh 100 646 2010 11 40
end
durationcanvas 133732 classinstance_ref 128100 // :client
  xyzwh 100 73 2010 11 40
end
durationcanvas 133860 classinstance_ref 128228 // :BackEnd
  xyzwh 384 73 2010 11 25
end
durationcanvas 134116 classinstance_ref 128100 // :client
  xyzwh 100 706 2010 11 40
end
durationcanvas 134244 classinstance_ref 128228 // :BackEnd
  xyzwh 384 706 2010 11 25
end
durationcanvas 134500 classinstance_ref 128228 // :BackEnd
  xyzwh 384 785 2010 11 40
end
durationcanvas 134628 classinstance_ref 128100 // :client
  xyzwh 100 785 2010 11 25
end
durationcanvas 134884 classinstance_ref 128100 // :client
  xyzwh 100 853 2010 11 40
end
durationcanvas 135012 classinstance_ref 128228 // :BackEnd
  xyzwh 384 853 2010 11 25
end
durationcanvas 135268 classinstance_ref 128228 // :BackEnd
  xyzwh 384 926 2010 11 40
end
durationcanvas 135396 classinstance_ref 128100 // :client
  xyzwh 100 926 2010 11 25
end
msg 128996 asynchronous
  from durationcanvas_ref 128740
  to durationcanvas_ref 128868
  yz 161 2015 explicitmsg "valid user and return primary information"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 114 147
msg 129380 synchronous
  from durationcanvas_ref 129124
  to durationcanvas_ref 129252
  yz 278 2015 explicitmsg "balance request"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 171 262
msg 129764 asynchronous
  from durationcanvas_ref 129508
  to durationcanvas_ref 129636
  yz 371 2015 explicitmsg "return balance success"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 152 355
msg 130148 synchronous
  from durationcanvas_ref 129892
  to durationcanvas_ref 130020
  yz 507 2015 explicitmsg "transaction history request"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 156 491
msg 132068 asynchronous
  from durationcanvas_ref 131812
  to durationcanvas_ref 131940
  yz 580 2015 explicitmsg "return transaction history seccess"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 137 564
reflexivemsg 132964 synchronous
  to durationcanvas_ref 132836
  yz 212 2015 explicitmsg "user card"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 94 198
reflexivemsg 133220 synchronous
  to durationcanvas_ref 133092
  yz 431 2015 explicitmsg "display and print"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 93 415
reflexivemsg 133476 synchronous
  to durationcanvas_ref 133348
  yz 646 2015 explicitmsg "display"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 94 629
msg 133988 synchronous
  from durationcanvas_ref 133732
  to durationcanvas_ref 133860
  yz 73 2015 explicitmsg "user card valid request"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 177 57
msg 134372 synchronous
  from durationcanvas_ref 134116
  to durationcanvas_ref 134244
  yz 706 2015 explicitmsg "print request"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 205 690
msg 134756 asynchronous
  from durationcanvas_ref 134500
  to durationcanvas_ref 134628
  yz 785 2015 explicitmsg "print success"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 203 769
msg 135140 synchronous
  from durationcanvas_ref 134884
  to durationcanvas_ref 135012
  yz 854 2015 explicitmsg "Email for recipt request"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 176 838
msg 135524 asynchronous
  from durationcanvas_ref 135268
  to durationcanvas_ref 135396
  yz 926 2015 explicitmsg "Email success"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 200 910
end
