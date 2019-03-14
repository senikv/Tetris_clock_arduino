// *********************************************************************
// Functions for drawing on the matrix
// *********************************************************************



// *********************************************************************
// Draws a brick shape at a given position
// *********************************************************************
void drawShape(int blocktype, int x_pos, int y_pos, int num_rot)
{
  // Square
  if (blocktype == 0)
  {
    matrix.drawPixel(x_pos, y_pos, 1);
    matrix.drawPixel(x_pos + 1, y_pos, 1);
    matrix.drawPixel(x_pos, y_pos - 1, 1);
    matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
  }

  // L-Shape
  if (blocktype == 1)
  {
    if (num_rot == 0)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos, y_pos - 2, 1);
    }
    if (num_rot == 1)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 2, y_pos - 1, 1);
    }
    if (num_rot == 2)
    {
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 2, 1);
      matrix.drawPixel(x_pos, y_pos - 2, 1);
    }
    if (num_rot == 3)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 2, y_pos, 1);
      matrix.drawPixel(x_pos + 2, y_pos - 1, 1);
    }
  }

  // L-Shape (reverse)
  if (blocktype == 2)
  {
    if (num_rot == 0)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 2, 1);
    }
    if (num_rot == 1)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 2, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
    }
    if (num_rot == 2)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos, y_pos - 2, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 2, 1);
    }
    if (num_rot == 3)
    {
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 2, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 2, y_pos, 1);
    }
  }

  // I-Shape
  if (blocktype == 3)
  {
    if (num_rot == 0 || num_rot == 2)
    { // Horizontal
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 2, y_pos, 1);
      matrix.drawPixel(x_pos + 3, y_pos, 1);
    }
    if (num_rot == 1 || num_rot == 3)
    { // Vertical
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos, y_pos - 2, 1);
      matrix.drawPixel(x_pos, y_pos - 3, 1);
    }
  }

  // S-Shape
  if (blocktype == 4)
  {
    if (num_rot == 0 || num_rot == 2)
    {
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos, y_pos - 2, 1);
    }
    if (num_rot == 1 || num_rot == 3)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 2, y_pos - 1, 1);
    }
  }

  // S-Shape (reversed)
  if (blocktype == 5)
  {
    if (num_rot == 0 || num_rot == 2)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 2, 1);
    }
    if (num_rot == 1 || num_rot == 3)
    {
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 2, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
    }
  }

  // Half cross
  if (blocktype == 6)
  {
    if (num_rot == 0)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos + 2, y_pos, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
    }
    if (num_rot == 1)
    {
      matrix.drawPixel(x_pos, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos, y_pos - 2, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
    }
    if (num_rot == 2)
    {
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 2, y_pos - 1, 1);
    }
    if (num_rot == 3)
    {
      matrix.drawPixel(x_pos + 1, y_pos, 1);
      matrix.drawPixel(x_pos, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 1, 1);
      matrix.drawPixel(x_pos + 1, y_pos - 2, 1);
    }
  }
}

// *********************************************************************
// Helper function that that return the falling instruction for a given number
// *********************************************************************
fall_instr getFallinstrByNum(int num, int blockindex)
{
  if (num == 0)
  {
    return num_0[blockindex];
  }
  if (num == 1)
  {
    return num_1[blockindex];
  }
  if (num == 2)
  {
    return num_2[blockindex];
  }
  if (num == 3)
  {
    return num_3[blockindex];
  }
  if (num == 4)
  {
    return num_4[blockindex];
  }
  if (num == 5)
  {
    return num_5[blockindex];
  }
  if (num == 6)
  {
    return num_6[blockindex];
  }
  if (num == 7)
  {
    return num_7[blockindex];
  }
  if (num == 8)
  {
    return num_8[blockindex];
  }
  if (num == 9)
  {
    return num_9[blockindex];
  }
}

// *********************************************************************
// Helper function that return the number of bricks for a given number
// *********************************************************************
int getBocksizeByNum(int num)
{
  if (num == 0)
  {
    return SIZE_NUM_0;
  }
  if (num == 1)
  {
    return SIZE_NUM_1;
  }
  if (num == 2)
  {
    return SIZE_NUM_2;
  }
  if (num == 3)
  {
    return SIZE_NUM_3;
  }
  if (num == 4)
  {
    return SIZE_NUM_4;
  }
  if (num == 5)
  {
    return SIZE_NUM_5;
  }
  if (num == 6)
  {
    return SIZE_NUM_6;
  }
  if (num == 7)
  {
    return SIZE_NUM_7;
  }
  if (num == 8)
  {
    return SIZE_NUM_8;
  }
  if (num == 9)
  {
    return SIZE_NUM_9;
  }
}

// *********************************************************************
// Main function that handles the drawing of all numbers
// *********************************************************************
void drawNumbers()
{
  // For each number position
  for (int numpos = 0; numpos < SIZE_NUM_STATES; numpos++)
  {

    // Draw falling shape
    if (numstates[numpos].blockindex < getBocksizeByNum(numstates[numpos].num_to_draw))
    {
      fall_instr current_fall = getFallinstrByNum(numstates[numpos].num_to_draw, numstates[numpos].blockindex);

      // Handle variations of rotations
      uint8_t rotations = current_fall.num_rot;
      if (rotations == 1)
      {
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 2))
        {
          rotations = 0;
        }
      }
      if (rotations == 2)
      {
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 3))
        {
          rotations = 0;
        }
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 3 * 2))
        {
          rotations = 1;
        }
      }
      if (rotations == 3)
      {
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 4))
        {
          rotations = 0;
        }
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 4 * 2))
        {
          rotations = 1;
        }
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 4 * 3))
        {
          rotations = 2;
        }
      }

      drawShape(current_fall.blocktype, current_fall.x_pos + numstates[numpos].x_shift, numstates[numpos].fallindex - 1, rotations);
      numstates[numpos].fallindex++;

      if (numstates[numpos].fallindex > current_fall.y_stop)
      {
        numstates[numpos].fallindex = 0;
        numstates[numpos].blockindex++;
      }
    }

    // Draw already dropped shapes
    if (numstates[numpos].blockindex > 0)
    {
      for (int i = 0; i < numstates[numpos].blockindex; i++)
      {
        fall_instr fallen_block = getFallinstrByNum(numstates[numpos].num_to_draw, i);
        drawShape(fallen_block.blocktype, fallen_block.x_pos + numstates[numpos].x_shift, fallen_block.y_stop - 1, fallen_block.num_rot);
      }
    }
  }

  if (seconds_odd)
  {
    matrix.drawPixel(15, 12, 1);
    matrix.drawPixel(16, 12, 1);
    matrix.drawPixel(15, 13, 1);
    matrix.drawPixel(16, 13, 1);

    matrix.drawPixel(15, 8, 1);
    matrix.drawPixel(16, 8, 1);
    matrix.drawPixel(15, 9, 1);
    matrix.drawPixel(16, 9, 1);
  }

  

}


// *********************************************************************
// Handler for the display refresh ticker
// *********************************************************************
//void display_updater()
//{
//  //matrix.write();
//  delay(70);
//}

// *********************************************************************
// Handler for the number refresh ticker
// *********************************************************************
void number_updater()
{
  matrix.fillScreen(LOW);
  //matrix.write();
  drawNumbers();
  matrix.write();
}
