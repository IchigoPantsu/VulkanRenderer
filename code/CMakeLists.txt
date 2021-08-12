set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_FLAGS "-Wall -fpermissive -g")
set(CMAKE_CXX_FLAGS "-Wall -g")
#set(CMAKE_CXX_LINK_EXECUTABLE "${CMAKE_CXX_LINK_EXECUTABLE} -ldl")
#set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/$<IF:$<CONFIG:Debug>,Debug,Release>/chapter06")

file(GLOB ENGINE_FILES

#Physics
./Physics/Body.cpp
./Physics/Body.h
./Physics/Broadphase.cpp
./Physics/Broadphase.h
./Physics/Constraints
./Physics/Constraints.cpp
./Physics/Constraints.h
./Physics/Contact.cpp
./Physics/Contact.h
./Physics/GJK.cpp
./Physics/GJK.h
./Physics/Intersections.cpp
./Physics/Intersections.h
./Physics/Manifold.cpp
./Physics/Manifold.h
./Physics/Shapes
./Physics/Shapes.cpp
./Physics/Shapes.h

#Physics/Shapes
./Physics/Shapes/ShapeBase.h
./Physics/Shapes/ShapeBox.cpp
./Physics/Shapes/ShapeBox.h
./Physics/Shapes/ShapeConvex.cpp
./Physics/Shapes/ShapeConvex.h
./Physics/Shapes/ShapeSphere.cpp
./Physics/Shapes/ShapeSphere.h

#Physics/Constraints
./Physics/Constraints/ConstraintBase.h
./Physics/Constraints/ConstraintConstantVelocity.cpp
./Physics/Constraints/ConstraintConstantVelocity.h
./Physics/Constraints/ConstraintDistance.cpp
./Physics/Constraints/ConstraintDistance.h
./Physics/Constraints/ConstraintHinge.cpp
./Physics/Constraints/ConstraintHinge.h
./Physics/Constraints/ConstraintMotor.cpp
./Physics/Constraints/ConstraintMotor.h
./Physics/Constraints/ConstraintMover.cpp
./Physics/Constraints/ConstraintMover.h
./Physics/Constraints/ConstraintOrientation.cpp
./Physics/Constraints/ConstraintOrientation.h
./Physics/Constraints/ConstraintPenetration.cpp
./Physics/Constraints/ConstraintPenetration.h

#Renderer
./Renderer/Buffer.cpp
./Renderer/Buffer.h
./Renderer/Descriptor.cpp
./Renderer/Descriptor.h
./Renderer/DeviceContext.cpp
./Renderer/DeviceContext.h
./Renderer/Fence.cpp
./Renderer/Fence.h
./Renderer/FrameBuffer.cpp
./Renderer/FrameBuffer.h
./Renderer/Image.cpp
./Renderer/Image.h
./Renderer/model.cpp
./Renderer/model.h
./Renderer/OffscreenRenderer.cpp
./Renderer/OffscreenRenderer.h
./Renderer/Pipeline.cpp
./Renderer/Pipeline.h
./Renderer/Samplers.cpp
./Renderer/Samplers.h
./Renderer/shader.cpp
./Renderer/shader.h
./Renderer/SwapChain.cpp
./Renderer/SwapChain.h

#Math
./Math/Bounds.cpp
./Math/Bounds.h
./Math/LCP.cpp
./Math/LCP.h
./Math/Matrix.h
./Math/Quat.h
./Math/Vector.h

./application.cpp
./application.h
./Fileio.cpp
./Fileio.h
./Scene.cpp
./Scene.h
./main.cpp
)

add_executable (code_base ${ENGINE_FILES})
target_link_libraries(code_base 
  #Vulkan::Vulkan
  ${LIBS}
)
