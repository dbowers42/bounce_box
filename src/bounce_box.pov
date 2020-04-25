 #include "colors.inc"
 #include "woods.inc"
 #include "bounce_box.inc"

background { White }

// Lights!
//
light_source {
  <-2, 4, -3> * 300           // X, Y, and Z coordinates of the light source
  color White
}

// Camera!
//
camera {
  location <1, 1, -2> * 30 // X, Y and Z coordinates of the camera
  look_at  <0, 1,  0>  // X, Y and Z coordinates of where the camera is aimed
}



// plane {
//     y, -1

//     material {
//         texture {
//             pigment {
//                 Blue
//             }
//         }
//     }
// }

object { 
    BounceBox 
    rotate <clock*360, clock*360, clock*360>
}