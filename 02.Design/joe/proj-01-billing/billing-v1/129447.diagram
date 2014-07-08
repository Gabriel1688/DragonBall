format 74

classinstance 128039 class_ref 128039 // Client
  name ""   xyz 222 4 2000 life_line_z 2000
classinstance 128167 class_ref 128167 // Terminal
  name ""   xyz 364 4 2000 life_line_z 2000
note 128295 "Bill Reciept Sequence Diagram"
  xyzwh 13 12 2000 133 59
durationcanvas 128679 classinstance_ref 128167 // :Terminal
  xyzwh 386 62 2010 11 34
end
durationcanvas 128807 classinstance_ref 128039 // :Client
  xyzwh 236 62 2010 11 111
end
durationcanvas 129063 classinstance_ref 128167 // :Terminal
  xyzwh 386 157 2010 11 85
  overlappingdurationcanvas 130087
    xyzwh 392 175 2020 11 59
  end
end
msg 128935 asynchronous
  from durationcanvas_ref 128679
  to durationcanvas_ref 128807
  yz 63 2015 explicitmsg "Print Require"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 276 46
msg 129191 synchronous
  from durationcanvas_ref 128807
  to durationcanvas_ref 129063
  yz 157 2015 explicitmsg "Print Confirm"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 279 141
reflexivemsg 130215 asynchronous
  to durationcanvas_ref 130087
  yz 176 2025 explicitmsg "Print"
  show_full_operations_definition default drawing_language default show_context_mode default
  label_xy 411 193
end
