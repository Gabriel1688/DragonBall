format 74

pseudostatecanvas 128039 pseudostate_ref 128039 // initial
   xyz 60 81 2000
end
statecanvas 128167 state_ref 128423 // Amount Input
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 292 72 2000 97 37
end
statecanvas 128295 state_ref 128551 // Amount Confirmed
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 502 281 2000 129 37
end
pseudostatecanvas 128423 pseudostate_ref 128167 // final
   xyz 405 286 2000
end
note 128551 "Bill Amount State Diagram"
  xyzwh 62 286 2000 187 39
statecanvas 128679 state_ref 128679 // Amount Cancled
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 113 209 2000 115 37
end
statecanvas 128807 state_ref 128807 // Welcome
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 134 72 2000 73 37
end
statecanvas 129191 state_ref 128935 // Amount Confirm Required
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 483 72 2005 169 37
end
pseudostatecanvas 129447 pseudostate_ref 128295 // choice
   xyz 554 209 2000
end
statecanvas 130215 state_ref 130727 // Amount Confimed
  show_activities default region_horizontally default drawing_language default show_stereotype_properties default
  xyzwh 505 146 2000 123 37
end
transitioncanvas 128935 transition_ref 128039 // <transition>
  
  from ref 128039 z 2001 to ref 128807
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129063 transition_ref 128167 // Input_amount
  
  from ref 128807 z 2001 label "Input_amount" xyz 209 67 2001 to ref 128167
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129319 transition_ref 128295 // Ask for confirm
  
  from ref 128167 z 2006 label "Ask for confirm" xyz 395 64 2006 to ref 129191
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129703 transition_ref 128551 // OK
  
  from ref 129447 z 2001 label "OK" xyz 571 247 2001 to ref 128295
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129831 transition_ref 128679 // <transition>
  
  from ref 128295 z 2001 to ref 128423
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 129959 transition_ref 128807 // Cancle
  
  from ref 129447 z 2001 label "Cancle" xyz 483 207 2001 to ref 128679
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130087 transition_ref 128935 // <transition>
  
  from ref 128679 z 2001 to ref 128807
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130471 transition_ref 131751 // Client confirm
  
  from ref 129191 z 2006 label "Client confirm" xyz 527 118 2006 to ref 130215
  write_horizontally default show_definition default drawing_language default
end
transitioncanvas 130599 transition_ref 131879 // <transition>
  
  from ref 130215 z 2001 to ref 129447
  write_horizontally default show_definition default drawing_language default
end
end
