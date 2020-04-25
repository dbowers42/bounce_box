#local M_Frame = material {
    texture {
        T_Wood7
        scale 4
    }
}

#local M_Pane = material {
   texture {
       pigment
       {
           Blue
        }
   }
 }

#local north_east = <10, 0, 10>;
#local north_west = <-10, 0, 10>;
#local south_west = <-10, 0, -10>;
#local south_east = <10, 0, -10>;

#local top_north_east = <10, 10, 10>;
#local top_north_west = <-10, 10, 10>;
#local top_south_west = <-10, 10, -10>;
#local top_south_east = <10, 10, -10>;
#local bottom_north_east = <10, -10, 10>;
#local bottom_north_west = <-10, -10, 10>;
#local bottom_south_west = <-10, -10, -10>;
#local bottom_south_east = <10, -10, -10>;

#local Pane = box {
    <-1.0, -1.0, -1.0>
    <1.0, 1.0, 1.0>
    scale <10,.25, 10>

    material { M_Pane }
}

#local FrameCorner = box {
    <-1.0, -1.0, -1.0>,
    <1.0, 1.0, 1.0>
    material { M_Frame }
}

#local FrameEdge = box {
    <-1.0 , -1.0, -1.0>,
    <1.0, 1.0, 1.0>
    scale <0.8, 10, 0.8>
    material { M_Frame }
}

#declare BounceBox = union {
    object {
        Pane
        translate 10*y
    }

    object {
        Pane
        translate -10*y
    }

    object {
        Pane
        rotate 90*z
        translate -10*x
    }

     object {
        Pane
        rotate 90*z
        translate 10*x
    }

     object {
        Pane
        rotate 90*x
        translate -10*z
    }

     object {
        Pane
        rotate 90*x
        translate 10*z
    }

    union {
        object {
            FrameEdge
            translate north_east
        }

        object {
            FrameEdge
            translate north_west
        }

        object {
            FrameEdge
            translate south_west
        }

        object {
            FrameEdge
            translate south_east
        }
    }

    union {
        object {
            FrameEdge
            translate north_east
        }

        object {
            FrameEdge
            translate north_west
        }

        object {
            FrameEdge
            translate south_west
        }

        object {
            FrameEdge
            translate south_east
        }

        rotate 90*x
    }

    union {
        object {
            FrameEdge
            translate north_east
        }

        object {
            FrameEdge
            translate north_west
        }

        object {
            FrameEdge
            translate south_west
        }

        object {
            FrameEdge
            translate south_east
        }

        rotate 90*z
    }

    object { 
        FrameCorner 
        translate top_north_east
    }

    object { 
        FrameCorner 
        translate top_north_west
    }

    object { 
        FrameCorner 
        translate top_south_west
    }

    object { 
        FrameCorner
        translate top_south_east 
    }

    object { 
        FrameCorner 
        translate bottom_north_east
    }

    object { 
        FrameCorner 
        translate bottom_north_west
    }

    object { 
        FrameCorner 
        translate bottom_south_west
    }

    object { 
        FrameCorner
        translate bottom_south_east 
    }
}