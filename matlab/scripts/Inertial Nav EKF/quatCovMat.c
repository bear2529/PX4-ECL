float t2 = rotX*rotX;
float t4 = rotY*rotY;
float t5 = rotZ*rotZ;
float t6 = t2+t4+t5;
float t7 = sqrtf(t6);
float t8 = t7*0.5f;
float t3 = sinf(t8);
float t9 = t3*t3;
float t10 = 1.0f/t6;
float t11 = 1.0f/sqrtf(t6);
float t12 = cosf(t8);
float t13 = 1.0f/powf(t6,1.5f);
float t14 = t3*t11;
float t15 = rotX*rotY*t3*t13;
float t16 = rotX*rotZ*t3*t13;
float t17 = rotY*rotZ*t3*t13;
float t18 = t2*t10*t12*0.5f;
float t27 = t2*t3*t13;
float t19 = t14+t18-t27;
float t23 = rotX*rotY*t10*t12*0.5f;
float t28 = t15-t23;
float t20 = rotY*rotVarY*t3*t11*t28*0.5f;
float t25 = rotX*rotZ*t10*t12*0.5f;
float t31 = t16-t25;
float t21 = rotZ*rotVarZ*t3*t11*t31*0.5f;
float t22 = t20+t21-rotX*rotVarX*t3*t11*t19*0.5f;
float t24 = t15-t23;
float t26 = t16-t25;
float t29 = t4*t10*t12*0.5f;
float t34 = t3*t4*t13;
float t30 = t14+t29-t34;
float t32 = t5*t10*t12*0.5f;
float t40 = t3*t5*t13;
float t33 = t14+t32-t40;
float t36 = rotY*rotZ*t10*t12*0.5f;
float t39 = t17-t36;
float t35 = rotZ*rotVarZ*t3*t11*t39*0.5f;
float t37 = t15-t23;
float t38 = t17-t36;
float t41 = rotVarX*(t15-t23)*(t16-t25);
float t42 = t41-rotVarY*t30*t39-rotVarZ*t33*t39;
float t43 = t16-t25;
float t44 = t17-t36;
P[0][0] = rotVarX*t2*t9*t10*0.25f+rotVarY*t4*t9*t10*0.25f+rotVarZ*t5*t9*t10*0.25f;
P[0][1] = t22;
P[0][2] = t35+rotX*rotVarX*t3*t11*(t15-rotX*rotY*t10*t12*0.5f)*0.5f-rotY*rotVarY*t3*t11*t30*0.5f;
P[0][3] = rotX*rotVarX*t3*t11*(t16-rotX*rotZ*t10*t12*0.5f)*0.5f+rotY*rotVarY*t3*t11*(t17-rotY*rotZ*t10*t12*0.5f)*0.5f-rotZ*rotVarZ*t3*t11*t33*0.5f;
P[1][0] = t22;
P[1][1] = rotVarX*(t19*t19)+rotVarY*(t24*t24)+rotVarZ*(t26*t26);
P[1][2] = rotVarZ*(t16-t25)*(t17-rotY*rotZ*t10*t12*0.5f)-rotVarX*t19*t28-rotVarY*t28*t30;
P[1][3] = rotVarY*(t15-t23)*(t17-rotY*rotZ*t10*t12*0.5f)-rotVarX*t19*t31-rotVarZ*t31*t33;
P[2][0] = t35-rotY*rotVarY*t3*t11*t30*0.5f+rotX*rotVarX*t3*t11*(t15-t23)*0.5f;
P[2][1] = rotVarZ*(t16-t25)*(t17-t36)-rotVarX*t19*t28-rotVarY*t28*t30;
P[2][2] = rotVarY*(t30*t30)+rotVarX*(t37*t37)+rotVarZ*(t38*t38);
P[2][3] = t42;
P[3][0] = rotZ*rotVarZ*t3*t11*t33*(-1.0f/2.0f)+rotX*rotVarX*t3*t11*(t16-t25)*0.5f+rotY*rotVarY*t3*t11*(t17-t36)*0.5f;
P[3][1] = rotVarY*(t15-t23)*(t17-t36)-rotVarX*t19*t31-rotVarZ*t31*t33;
P[3][2] = t42;
P[3][3] = rotVarZ*(t33*t33)+rotVarX*(t43*t43)+rotVarY*(t44*t44);